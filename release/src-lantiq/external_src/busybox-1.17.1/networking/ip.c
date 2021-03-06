/* vi: set sw=4 ts=4: */
/*
 * "ip" utility frontend.
 *
 * Licensed under the GPL v2 or later, see the file LICENSE in this tarball.
 *
 * Authors: Alexey Kuznetsov, <kuznet@ms2.inr.ac.ru>
 *
 * Changes:
 * Rani Assaf <rani@magic.metawire.com> 980929:	resolve addresses
 * Bernhard Reutner-Fischer rewrote to use index_in_substr_array
 */

#include "libbb.h"

#include "libiproute/utils.h"
#include "libiproute/ip_common.h"

#if ENABLE_FEATURE_IP_ADDRESS \
 || ENABLE_FEATURE_IP_ROUTE \
 || ENABLE_FEATURE_IP_LINK \
 || ENABLE_FEATURE_IP_TUNNEL \
 || ENABLE_FEATURE_IP_RULE \
 || ENABLE_FEATURE_IP_NEIGHBOR

static int ip_print_help(char **argv UNUSED_PARAM)
{
	bb_show_usage();
}

typedef int (*ip_func_ptr_t)(int, char**);

static int ip_do(ip_func_ptr_t ip_func, int argc, char **argv)
{
	argc--;
	argv = ip_parse_common_args(&argc, argv + 1);
	return ip_func(argc, argv);
}

#if ENABLE_FEATURE_IP_ADDRESS
int ipaddr_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
int ipaddr_main(int argc, char **argv)
{
	return ip_do(do_ipaddr, argc, argv);
}
#endif
#if ENABLE_FEATURE_IP_LINK
int iplink_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
int iplink_main(int argc, char **argv)
{
	return ip_do(do_iplink, argc, argv);
}
#endif
#if ENABLE_FEATURE_IP_ROUTE
int iproute_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
int iproute_main(int argc, char **argv)
{
	return ip_do(do_iproute, argc, argv);
}
#endif
#if ENABLE_FEATURE_IP_RULE
int iprule_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
int iprule_main(int argc, char **argv)
{
	return ip_do(do_iprule, argc, argv);
}
#endif
#if ENABLE_FEATURE_IP_TUNNEL
int iptunnel_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
int iptunnel_main(int argc, char **argv)
{
	return ip_do(do_iptunnel, argc, argv);
}
#endif
#if ENABLE_FEATURE_IP_NEIGHBOR
int ipneigh_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
int ipneigh_main(int argc, char **argv)
{
    return ip_do(do_ipneigh, argc, argv);
}
#endif


int ip_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
int ip_main(int argc, char **argv)
{
	static const char keywords[] ALIGN1 =
		IF_FEATURE_IP_ADDRESS("address\0")
		IF_FEATURE_IP_ROUTE("route\0")
		IF_FEATURE_IP_ROUTE("r\0")
		IF_FEATURE_IP_LINK("link\0")
		IF_FEATURE_IP_TUNNEL("tunnel\0")
		IF_FEATURE_IP_TUNNEL("tunl\0")
		IF_FEATURE_IP_RULE("rule\0")
		IF_FEATURE_IP_NEIGHBOR("neigh\0")
        IF_FEATURE_IP_NEIGHBOR("neighbor\0")
        IF_FEATURE_IP_NEIGHBOR("neighbour\0")
		;
	static const ip_func_ptr_t ip_func_ptrs[] = {
		ip_print_help,
		IF_FEATURE_IP_ADDRESS(do_ipaddr,)
		IF_FEATURE_IP_ROUTE(do_iproute,)
		IF_FEATURE_IP_ROUTE(do_iproute,)
		IF_FEATURE_IP_LINK(do_iplink,)
		IF_FEATURE_IP_TUNNEL(do_iptunnel,)
		IF_FEATURE_IP_TUNNEL(do_iptunnel,)
		IF_FEATURE_IP_RULE(do_iprule,)
		IF_FEATURE_IP_NEIGHBOR(do_ipneigh,)
		IF_FEATURE_IP_NEIGHBOR(do_ipneigh,)
		IF_FEATURE_IP_NEIGHBOR(do_ipneigh,)
	};
	ip_func_ptr_t ip_func;
	int key;
	char **argvp = NULL;

	argvp = argv;
	argv = ip_parse_common_args(&argc, argv + 1);
	key = *argv ? index_in_substrings(keywords, *argv++) : -1;
	ip_func = ip_func_ptrs[key + 1];

	argc = argc - (((unsigned int)argv - (unsigned int)argvp) / sizeof(argv));
	return ip_func(argc, argv);
}

#endif /* any of ENABLE_FEATURE_IP_xxx is 1 */
