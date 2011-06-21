/*
 * This file was originally distributed as part of
 * shadow-utils-4.0.17-12.fc6.src.rpm and has been modified
 * in WRLinux for inclusion in rpm.
 */

/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Path for faillog file. */
#define FAILLOG_FILE "/var/log/faillog"

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#define GETGROUPS_T gid_t

/* Define to 1 if you have the `a64l' function. */
#define HAVE_A64L 1

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the `fchown' function. */
#define HAVE_FCHOWN 1

/* Define to 1 if you have the `fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the `getgroups' function. */
#define HAVE_GETGROUPS 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getspnam' function. */
#define HAVE_GETSPNAM 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getusershell' function. */
#define HAVE_GETUSERSHELL 1

/* Define to 1 if you have the `getutent' function. */
#define HAVE_GETUTENT 1

/* Define to 1 if you have the <gshadow.h> header file. */
/* #undef HAVE_GSHADOW_H */

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if you have the <lastlog.h> header file. */
#define HAVE_LASTLOG_H 1

/* Define to 1 if you have the `lckpwdf' function. */
#define HAVE_LCKPWDF 1

/* Defined if you have libcrack. */
/* #undef HAVE_LIBCRACK */

/* Defined if you have the ts&szs cracklib. */
/* #undef HAVE_LIBCRACK_HIST */

/* Defined if it includes *Pw functions. */
/* #undef HAVE_LIBCRACK_PW */

/* Define if struct lastlog has ll_host */
#define HAVE_LL_HOST 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have the <paths.h> header file. */
#define HAVE_PATHS_H 1

/* Define to 1 if you have the `putgrent' function. */
#define HAVE_PUTGRENT 1

/* Define to 1 if you have the `putpwent' function. */
#define HAVE_PUTPWENT 1

/* Define to 1 if you have the `putspent' function. */
#define HAVE_PUTSPENT 1

/* Define to 1 if you have the `rename' function. */
#define HAVE_RENAME 1

/* Define to 1 if you have the `rmdir' function. */
#define HAVE_RMDIR 1

/* Define to 1 if you have the <rpc/key_prot.h> header file. */
#define HAVE_RPC_KEY_PROT_H 1

/* Define to 1 if you have the <selinux/selinux.h> header file. */
/* #undef HAVE_SELINUX_SELINUX_H */

/* Define to 1 if you have the `setgroups' function. */
#define HAVE_SETGROUPS 1

/* Define to 1 if you have the `sgetgrent' function. */
/* #undef HAVE_SGETGRENT */

/* Define to 1 if you have the `sgetpwent' function. */
/* #undef HAVE_SGETPWENT */

/* Define to 1 if you have the `sgetspent' function. */
#define HAVE_SGETSPENT 1

/* Define to 1 if you have the <sgtty.h> header file. */
#define HAVE_SGTTY_H 1

/* Have working shadow group support in libc */
/* #undef HAVE_SHADOWGRP */

/* Define to 1 if you have the <shadow.h> header file. */
#define HAVE_SHADOW_H 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if `st_rdev' is member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_RDEV 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <termio.h> header file. */
#define HAVE_TERMIO_H 1

/* Define to 1 if you have the <ulimit.h> header file. */
#define HAVE_ULIMIT_H 1

/* Define to 1 if you have the `updwtmp' function. */
#define HAVE_UPDWTMP 1

/* Define to 1 if you have the `updwtmpx' function. */
#define HAVE_UPDWTMPX 1

/* Define to 1 if `utime(file, NULL)' sets file's timestamp to the present. */
#define HAVE_UTIME_NULL 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Path for lastlog file. */
#define LASTLOG_FILE "/var/log/lastlog"

/* Location of system mail spool directory. */
#define MAIL_SPOOL_DIR "/var/mail"

/* Name of user's mail spool file if stored in user's home directory. */
/* #undef MAIL_SPOOL_FILE */

/* Path to passwd program. */
#define PASSWD_PROGRAM "/usr/bin/passwd"

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define if login should support the -r flag for rlogind. */
#define RLOGIN 1

/* Define to the ruserok() "success" return value (0 or 1). */
#define RUSEROK 0

/* Define to 1 if the `setpgrp' function takes no argument. */
#define SETPGRP_VOID 1

/* Define to support the shadow group file. */
#define SHADOWGRP 1

/* Define to support S/Key logins. */
/* #undef SKEY */

/* Define to support newer BSD S/Key API */
/* #undef SKEY_BSD_STYLE */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to support /etc/suauth su access control. */
#define SU_ACCESS 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define to support Pluggable Authentication Modules */
/* #undef USE_PAM */

/* Define to use syslog(). */
#define USE_SYSLOG 1

/* Define if you have ut_host in struct utmp. */
#define UT_HOST 1

/* Define if you want to enable Audit messages */
/* #undef WITH_AUDIT */

/* Path for utmp file. */
#define _UTMP_FILE "/var/run/utmp"

/* Path for wtmp file. */
#define _WTMP_FILE "/var/log/wtmp"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to libshadow_getpass to use our own version of getpass(). */
/* #undef getpass */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to ut_name if struct utmp has ut_name (not ut_user). */
/* #undef ut_user */