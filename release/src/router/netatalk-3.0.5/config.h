/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if the admin group should be enabled */
#define ADMIN_GRP 1

/* Define if AFS should be used */
/* #undef AFS */

/* Does extattr API work */
/* #undef BROKEN_EXTATTR */

/* BSD compatiblity macro */
/* #undef BSD4_4 */

/* Define if CNID Concurrent BDB backend should be compiled. */
/* #undef CNID_BACKEND_CDB */

/* Define if CNID Database Daemon backend should be compiled. */
#define CNID_BACKEND_DBD 1

/* Define if CNID LAST scheme backend should be compiled. */
#define CNID_BACKEND_LAST 1

/* Define if CNID TDB scheme backend should be compiled. */
#define CNID_BACKEND_TDB 1

/* Required BDB version, major */
#define DB_MAJOR_REQ 4

/* Required BDB version, minor */
#define DB_MINOR_REQ 6

/* Required BDB version, patch */
#define DB_PATCH_REQ 0

/* Define if verbose debugging information should be included */
/* #undef DEBUG */

/* Define if you want to disable SIGALRM timers and DSI tickles */
/* #undef DEBUGGING */

/* Default CNID scheme to be used */
#define DEFAULT_CNID_SCHEME "dbd"

/* Define if shell check should be disabled */
/* #undef DISABLE_SHELLCHECK */

/* BSD compatibility macro */
/* #undef DLSYM_PREPEND_UNDERSCORE */

/* Available Extended Attributes modules */
#define EA_MODULES "ad"

/* Define if you want compatibily with the FHS */
/* #undef FHS_COMPATIBILITY */

/* Define if OS is FreeBSD */
/* #undef FREEBSD */

/* Whether ACLs support is available */
/* #undef HAVE_ACLS */

/* Whether acl_from_mode() is available */
/* #undef HAVE_ACL_FROM_MODE */

/* Whether acl_get_perm_np() is available */
/* #undef HAVE_ACL_GET_PERM_NP */

/* Define to 1 if you have the <acl/libacl.h> header file. */
/* #undef HAVE_ACL_LIBACL_H */

/* Define to 1 if you have the `add_proplist_entry' function. */
/* #undef HAVE_ADD_PROPLIST_ENTRY */

/* Whether AIX ACLs are available */
/* #undef HAVE_AIX_ACLS */

/* whether at funcs are available */
#define HAVE_ATFUNCS 1

/* Define to 1 if you have the `attropen' function. */
/* #undef HAVE_ATTROPEN */

/* Define to 1 if you have the `attr_get' function. */
/* #undef HAVE_ATTR_GET */

/* Define to 1 if you have the `attr_getf' function. */
/* #undef HAVE_ATTR_GETF */

/* Define to 1 if you have the `attr_list' function. */
/* #undef HAVE_ATTR_LIST */

/* Define to 1 if you have the `attr_listf' function. */
/* #undef HAVE_ATTR_LISTF */

/* Define to 1 if you have the `attr_remove' function. */
/* #undef HAVE_ATTR_REMOVE */

/* Define to 1 if you have the `attr_removef' function. */
/* #undef HAVE_ATTR_REMOVEF */

/* Define to 1 if you have the `attr_set' function. */
/* #undef HAVE_ATTR_SET */

/* Define to 1 if you have the `attr_setf' function. */
/* #undef HAVE_ATTR_SETF */

/* Define to 1 if you have the <attr/xattr.h> header file. */
/* #undef HAVE_ATTR_XATTR_H */

/* Use Avahi/DNS-SD registration */
/* #undef HAVE_AVAHI */

/* Uses Avahis threaded poll implementation */
/* #undef HAVE_AVAHI_THREADED_POLL */

/* Define to 1 if you have the `backtrace_symbols' function. */
/* #undef HAVE_BACKTRACE_SYMBOLS */

/* Define if dbtob is broken */
#define HAVE_BROKEN_DBTOB 1

/* Define to 1 if you have the <crypt.h> header file. */
#define HAVE_CRYPT_H 1

/* Define if support for dbus-glib was found */
/* #undef HAVE_DBUS_GLIB */

/* Define to 1 if you have the declaration of `cygwin_conv_path', and to 0 if
   you don't. */
/* #undef HAVE_DECL_CYGWIN_CONV_PATH */

/* Define to 1 if you have the `delproplist' function. */
/* #undef HAVE_DELPROPLIST */

/* Define to 1 if you have the `dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the `dlclose' function. */
#define HAVE_DLCLOSE 1

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the `dlerror' function. */
#define HAVE_DLERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `dlopen' function. */
/* #undef HAVE_DLOPEN */

/* Define to 1 if you have the `dlsym' function. */
#define HAVE_DLSYM 1

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* extattr API has full fledged fds for EAs */
/* #undef HAVE_EAFD */

/* Define to 1 if you have the `extattr_delete_fd' function. */
/* #undef HAVE_EXTATTR_DELETE_FD */

/* Define to 1 if you have the `extattr_delete_file' function. */
/* #undef HAVE_EXTATTR_DELETE_FILE */

/* Define to 1 if you have the `extattr_delete_link' function. */
/* #undef HAVE_EXTATTR_DELETE_LINK */

/* Define to 1 if you have the `extattr_get_fd' function. */
/* #undef HAVE_EXTATTR_GET_FD */

/* Define to 1 if you have the `extattr_get_file' function. */
/* #undef HAVE_EXTATTR_GET_FILE */

/* Define to 1 if you have the `extattr_get_link' function. */
/* #undef HAVE_EXTATTR_GET_LINK */

/* Define to 1 if you have the `extattr_list_fd' function. */
/* #undef HAVE_EXTATTR_LIST_FD */

/* Define to 1 if you have the `extattr_list_file' function. */
/* #undef HAVE_EXTATTR_LIST_FILE */

/* Define to 1 if you have the `extattr_list_link' function. */
/* #undef HAVE_EXTATTR_LIST_LINK */

/* Define to 1 if you have the `extattr_set_fd' function. */
/* #undef HAVE_EXTATTR_SET_FD */

/* Define to 1 if you have the `extattr_set_file' function. */
/* #undef HAVE_EXTATTR_SET_FILE */

/* Define to 1 if you have the `extattr_set_link' function. */
/* #undef HAVE_EXTATTR_SET_LINK */

/* Define to 1 if you have the `fdelproplist' function. */
/* #undef HAVE_FDELPROPLIST */

/* Define to 1 if you have the `fgetea' function. */
/* #undef HAVE_FGETEA */

/* Define to 1 if you have the `fgetproplist' function. */
/* #undef HAVE_FGETPROPLIST */

/* Define to 1 if you have the `fgetxattr' function. */
/* #undef HAVE_FGETXATTR */

/* Define to 1 if you have the `flistea' function. */
/* #undef HAVE_FLISTEA */

/* Define to 1 if you have the `flistxattr' function. */
/* #undef HAVE_FLISTXATTR */

/* Define to 1 if you have the `fremoveea' function. */
/* #undef HAVE_FREMOVEEA */

/* Define to 1 if you have the `fremovexattr' function. */
/* #undef HAVE_FREMOVEXATTR */

/* Define to 1 if you have the `fsetea' function. */
/* #undef HAVE_FSETEA */

/* Define to 1 if you have the `fsetproplist' function. */
/* #undef HAVE_FSETPROPLIST */

/* Define to 1 if you have the `fsetxattr' function. */
/* #undef HAVE_FSETXATTR */

/* Define to 1 if the system has the type `fshare_t'. */
/* #undef HAVE_FSHARE_T */

/* Define to 1 if you have the `fstatat' function. */
#define HAVE_FSTATAT 1

/* Define to 1 if you have the `getea' function. */
/* #undef HAVE_GETEA */

/* Define to 1 if you have the `getifaddrs' function. */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getproplist' function. */
/* #undef HAVE_GETPROPLIST */

/* Define to 1 if you have the `getusershell' function. */
#define HAVE_GETUSERSHELL 1

/* Define to 1 if you have the `getxattr' function. */
/* #undef HAVE_GETXATTR */

/* Define to 1 if you have the `get_proplist_entry' function. */
/* #undef HAVE_GET_PROPLIST_ENTRY */

/* Whether to enable GSSAPI support */
/* #undef HAVE_GSSAPI */

/* Define to 1 if you have the <gssapi/gssapi_generic.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_GENERIC_H */

/* Define to 1 if you have the <gssapi/gssapi.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_H */

/* Define to 1 if you have the <gssapi/gssapi_krb5.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_KRB5_H */

/* Define to 1 if you have the <gssapi.h> header file. */
/* #undef HAVE_GSSAPI_H */

/* Wheter GSS_C_NT_HOSTBASED_SERVICE is in gssapi.h */
/* #undef HAVE_GSS_C_NT_HOSTBASED_SERVICE */

/* Whether HPUX ACLs are available */
/* #undef HAVE_HPUX_ACLS */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Whether IRIX ACLs are available */
/* #undef HAVE_IRIX_ACLS */

/* Define if Kerberos 5 is available */
/* #undef HAVE_KERBEROS */

/* Define to 1 if you have the `krb5_free_error_message' function. */
/* #undef HAVE_KRB5_FREE_ERROR_MESSAGE */

/* Define to 1 if you have the `krb5_free_keytab_entry_contents' function. */
/* #undef HAVE_KRB5_FREE_KEYTAB_ENTRY_CONTENTS */

/* Define to 1 if you have the `krb5_free_unparsed_name' function. */
/* #undef HAVE_KRB5_FREE_UNPARSED_NAME */

/* Define to 1 if you have the <krb5.h> header file. */
/* #undef HAVE_KRB5_H */

/* Define to 1 if you have the <krb5/krb5.h> header file. */
/* #undef HAVE_KRB5_KRB5_H */

/* Define to 1 if you have the `krb5_kt_free_entry' function. */
/* #undef HAVE_KRB5_KT_FREE_ENTRY */

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* LARGEFILE support */
#define HAVE_LARGEFILE_SUPPORT /**/

/* Whether LDAP is available */
/* #undef HAVE_LDAP */

/* Define to 1 if you have the `lgetea' function. */
/* #undef HAVE_LGETEA */

/* Define to 1 if you have the `lgetxattr' function. */
/* #undef HAVE_LGETXATTR */

/* Define to 1 if you have the `crypt' library (-lcrypt). */
#define HAVE_LIBCRYPT 1

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the `des' library (-ldes). */
/* #undef HAVE_LIBDES */

/* Define if you have the libdl library or equivalent. */
#define HAVE_LIBDL 1

/* Define if libdlloader will be built on this platform */
#define HAVE_LIBDLLOADER 1

/* Define if the DHX2 modules should be built with libgcrypt */
#define HAVE_LIBGCRYPT 1

/* define if you have libquota */
/* #undef HAVE_LIBQUOTA */

/* Define to 1 if you have the <linux/dqblk_xfs.h> header file. */
#define HAVE_LINUX_DQBLK_XFS_H 1

/* Define to 1 if you have the <linux/xfs_fs.h> header file. */
/* #undef HAVE_LINUX_XFS_FS_H */

/* Define to 1 if you have the <linux/xqm.h> header file. */
/* #undef HAVE_LINUX_XQM_H */

/* Define to 1 if you have the `listea' function. */
/* #undef HAVE_LISTEA */

/* Define to 1 if you have the `listxattr' function. */
/* #undef HAVE_LISTXATTR */

/* Define to 1 if you have the `llistea' function. */
/* #undef HAVE_LLISTEA */

/* Define to 1 if you have the `llistxattr' function. */
/* #undef HAVE_LLISTXATTR */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `lremoveea' function. */
/* #undef HAVE_LREMOVEEA */

/* Define to 1 if you have the `lremovexattr' function. */
/* #undef HAVE_LREMOVEXATTR */

/* Define to 1 if you have the `lsetea' function. */
/* #undef HAVE_LSETEA */

/* Define to 1 if you have the `lsetxattr' function. */
/* #undef HAVE_LSETXATTR */

/* Use mDNSRespnder/DNS-SD registration */
/* #undef HAVE_MDNS */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mempcpy' function. */
#define HAVE_MEMPCPY 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <mntent.h> header file. */
#define HAVE_MNTENT_H 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Whether no ACLs support is available */
#define HAVE_NO_ACLS 1

/* Define to 1 if you have the `openat' function. */
#define HAVE_OPENAT 1

/* Define to 1 if you have the <pam/pam_appl.h> header file. */
/* #undef HAVE_PAM_PAM_APPL_H */

/* Whether POSIX ACLs are available */
/* #undef HAVE_POSIX_ACLS */

/* Define to 1 if you have the `pread' function. */
#define HAVE_PREAD 1

/* Define to 1 if you have the `pselect' function. */
#define HAVE_PSELECT 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
/* #undef HAVE_PTHREAD_PRIO_INHERIT */

/* Define to 1 if you have the `pwrite' function. */
#define HAVE_PWRITE 1

/* Define to 1 if you have the `removeea' function. */
/* #undef HAVE_REMOVEEA */

/* Define to 1 if you have the `removexattr' function. */
/* #undef HAVE_REMOVEXATTR */

/* Define to 1 if you have the `renameat' function. */
#define HAVE_RENAMEAT 1

/* Define to 1 if you have the <rpcsvc/rquota.h> header file. */
/* #undef HAVE_RPCSVC_RQUOTA_H */

/* Define to 1 if you have the <rpc/pmap_prot.h> header file. */
/* #undef HAVE_RPC_PMAP_PROT_H */

/* Define to 1 if you have the <rpc/rpc.h> header file. */
/* #undef HAVE_RPC_RPC_H */

/* Define to 1 if you have the <security/pam_appl.h> header file. */
/* #undef HAVE_SECURITY_PAM_APPL_H */

/* Define to 1 if you have the `sendfilev' function. */
/* #undef HAVE_SENDFILEV */

/* Define to 1 if you have the `setea' function. */
/* #undef HAVE_SETEA */

/* Define to 1 if you have the `setlinebuf' function. */
#define HAVE_SETLINEBUF 1

/* Define to 1 if you have the `setproplist' function. */
/* #undef HAVE_SETPROPLIST */

/* Define to 1 if you have the `setxattr' function. */
/* #undef HAVE_SETXATTR */

/* Define to 1 if you have the <sgtty.h> header file. */
#define HAVE_SGTTY_H 1

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Define to 1 if you have the `sizeof_proplist_entry' function. */
/* #undef HAVE_SIZEOF_PROPLIST_ENTRY */

/* Whether solaris ACLs are available */
/* #undef HAVE_SOLARIS_ACLS */

/* Define to 1 if you have the <statfs.h> header file. */
/* #undef HAVE_STATFS_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if `tm_gmtoff' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_GMTOFF 1

/* Define to 1 if you have the <sys/attributes.h> header file. */
/* #undef HAVE_SYS_ATTRIBUTES_H */

/* Define to 1 if you have the <sys/ea.h> header file. */
/* #undef HAVE_SYS_EA_H */

/* Define to 1 if you have the <sys/extattr.h> header file. */
/* #undef HAVE_SYS_EXTATTR_H */

/* Define to 1 if you have the <sys/fcntl.h> header file. */
#define HAVE_SYS_FCNTL_H 1

/* Define to 1 if you have the <sys/mnttab.h> header file. */
/* #undef HAVE_SYS_MNTTAB_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/termios.h> header file. */
#define HAVE_SYS_TERMIOS_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have the <sys/xattr.h> header file. */
/* #undef HAVE_SYS_XATTR_H */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Whether Tru64 ACLs are available */
/* #undef HAVE_TRU64_ACLS */

/* Whether UCS-2-INTERNAL is supported */
/* #undef HAVE_UCS2INTERNAL */

/* Define to 1 if you have the <ufs/quota.h> header file. */
/* #undef HAVE_UFS_QUOTA_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Whether UnixWare ACLs are available */
/* #undef HAVE_UNIXWARE_ACLS */

/* Define to 1 if you have the `unlinkat' function. */
#define HAVE_UNLINKAT 1

/* Whether to use native iconv */
/* #undef HAVE_USABLE_ICONV */

/* Define to 1 if you have the `utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the <xfs/libxfs.h> header file. */
/* #undef HAVE_XFS_LIBXFS_H */

/* Define to 1 if you have the <xfs/xfs_fs.h> header file. */
/* #undef HAVE_XFS_XFS_FS_H */

/* Define to 1 if you have the <xfs/xqm.h> header file. */
/* #undef HAVE_XFS_XQM_H */

/* Define as const if the declaration of iconv() needs const. */
/* #undef ICONV_CONST */

/* OS is Linux */
#define LINUX 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Disable assertions */
#define NDEBUG 1

/* Define if dlsym() requires a leading underscore in symbol names. */
/* #undef NEED_USCORE */

/* Define if OS is NetBSD */
/* #undef NETBSD */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define if quota support should not compiled */
#define NO_QUOTA_SUPPORT 1

/* Define if the gmtoff member of struct tm is not available */
/* #undef NO_STRUCT_TM_GMTOFF */

/* Define if the OpenSSL DHX modules should be built */
#define OPENSSL_DHX 1

/* errno returned by open with O_NOFOLLOW */
#define OPEN_NOFOLLOW_ERRNO ELOOP

/* Name of package */
#define PACKAGE "netatalk"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* netatalk lockfile path */
#define PATH_NETATALK_LOCK "/var/lock/netatalk"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Whether the realpath function allows NULL */
/* #undef REALPATH_TAKES_NULL */

/* Define if the sendfile() function uses BSD semantics */
/* #undef SENDFILE_FLAVOR_BSD */

/* Whether linux sendfile() API is available */
#define SENDFILE_FLAVOR_LINUX 1

/* Solaris sendfile() */
/* #undef SENDFILE_FLAVOR_SOLARIS */

/* Define if shadow passwords should be used */
#define SHADOWPW 1

/* Solaris compatibility macro */
/* #undef SOLARIS */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if TCP wrappers should be used */
/* #undef TCPWRAP */

/* Define if the DHX UAM modules should be compiled */
#define UAM_DHX 1

/* Define if the DHX2 UAM modules should be compiled */
#define UAM_DHX2 1

/* Define if the PGP UAM module should be compiled */
/* #undef UAM_PGP */

/* Define if cracklib should be used */
/* #undef USE_CRACKLIB */

/* Define to enable PAM support */
/* #undef USE_PAM */

/* Define to enable Zeroconf support */
/* #undef USE_ZEROCONF */

/* Version number of package */
#define VERSION "3.0.5"

/* dtrace probes */
/* #undef WITH_DTRACE */

/* Whether sendfile() should be used */
#define WITH_SENDFILE 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  define WORDS_BIGENDIAN 1
# endif
#endif

/* xattr functions have additional options */
/* #undef XATTR_ADD_OPT */

/* AT file source */
#define _ATFILE_SOURCE 1

/* _FILE_OFFSET_BITS (for LARGEFILE support) */
#define _FILE_OFFSET_BITS 64

/* Whether to use GNU libc extensions */
#define _GNU_SOURCE 1

/* Compatibility macro */
/* #undef _ISOC9X_SOURCE */

/* _LARGE_FILES (for LARGEFILE support) */
/* #undef _LARGE_FILES */

/* path to cracklib dictionary */
/* #undef _PATH_CRACKLIB */

/* Solaris compilation environment */
/* #undef _XOPEN_SOURCE */

/* Solaris compilation environment */
/* #undef __EXTENSIONS__ */

/* Solaris compatibility macro */
/* #undef __svr4__ */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif