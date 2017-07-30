/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "sdfs.h"


void
sdfs_prog_0x0001(char *host)
{
	CLIENT *clnt;
	READ_RSP_T  *result_1;
	READ_REQ_T  rpc_read_0x0001_arg;
	WRITE_RSP_T  *result_2;
	WRITE_REQ_T  rpc_write_0x0001_arg;
	int  *result_3;
	OPEN_REQ_T  rpc_open_0x0001_arg;
	int  *result_4;
	CREATE_REQ_T  rpc_create_0x0001_arg;
	GETATTR_RSP_T  *result_5;
	GETATTR_REQ_T  rpc_getattr_0x0001_arg;
	READDIR_RSP_T  *result_6;
	READDIR_REQ_T  rpc_readdir_0x0001_arg;
	int  *result_7;
	ACCESS_REQ_T  rpc_access_0x0001_arg;
	int  *result_8;
	MKNOD_REQ_T  rpc_mknod_0x0001_arg;
	int  *result_9;
	MKDIR_REQ_T  rpc_mkdir_0x0001_arg;
	int  *result_10;
	char * rpc_unlink_0x0001_arg;
	int  *result_11;
	char * rpc_rmdir_0x0001_arg;
	int  *result_12;
	SYMLINK_REQ_T  rpc_symlink_0x0001_arg;
	int  *result_13;
	RENAME_REQ_T  rpc_rename_0x0001_arg;
	int  *result_14;
	LINK_REQ_T  rpc_link_0x0001_arg;
	int  *result_15;
	CHMOD_REQ_T  rpc_chmod_0x0001_arg;
	int  *result_16;
	CHOWN_REQ_T  rpc_chown_0x0001_arg;
	int  *result_17;
	TRUNCATE_REQ_T  rpc_truncate_0x0001_arg;
	READLINK_RSP_T  *result_18;
	READLINK_REQ_T  rpc_readlink_0x0001_arg;
	STATVFS_RSP_T  *result_19;
	char * rpc_statvfs_0x0001_arg;
	int  *result_20;
	SETXATTR_REQ_T  rpc_setxattr_0x0001_arg;
	GETXATTR_RSP_T  *result_21;
	GETXATTR_REQ_T  rpc_getxattr_0x0001_arg;
	LISTXATTR_RSP_T  *result_22;
	LISTXATTR_REQ_T  rpc_listxattr_0x0001_arg;
	int  *result_23;
	REMOVEXATTR_REQ_T  rpc_removexattr_0x0001_arg;
	int  *result_24;
	FALLOCATE_REQ_T  rpc_fallocate_0x0001_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SDFS_PROG, SDFS_V1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = rpc_read_0x0001(&rpc_read_0x0001_arg, clnt);
	if (result_1 == (READ_RSP_T *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = rpc_write_0x0001(&rpc_write_0x0001_arg, clnt);
	if (result_2 == (WRITE_RSP_T *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = rpc_open_0x0001(&rpc_open_0x0001_arg, clnt);
	if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = rpc_create_0x0001(&rpc_create_0x0001_arg, clnt);
	if (result_4 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_5 = rpc_getattr_0x0001(&rpc_getattr_0x0001_arg, clnt);
	if (result_5 == (GETATTR_RSP_T *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_6 = rpc_readdir_0x0001(&rpc_readdir_0x0001_arg, clnt);
	if (result_6 == (READDIR_RSP_T *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_7 = rpc_access_0x0001(&rpc_access_0x0001_arg, clnt);
	if (result_7 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_8 = rpc_mknod_0x0001(&rpc_mknod_0x0001_arg, clnt);
	if (result_8 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_9 = rpc_mkdir_0x0001(&rpc_mkdir_0x0001_arg, clnt);
	if (result_9 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_10 = rpc_unlink_0x0001(&rpc_unlink_0x0001_arg, clnt);
	if (result_10 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_11 = rpc_rmdir_0x0001(&rpc_rmdir_0x0001_arg, clnt);
	if (result_11 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_12 = rpc_symlink_0x0001(&rpc_symlink_0x0001_arg, clnt);
	if (result_12 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_13 = rpc_rename_0x0001(&rpc_rename_0x0001_arg, clnt);
	if (result_13 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_14 = rpc_link_0x0001(&rpc_link_0x0001_arg, clnt);
	if (result_14 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_15 = rpc_chmod_0x0001(&rpc_chmod_0x0001_arg, clnt);
	if (result_15 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_16 = rpc_chown_0x0001(&rpc_chown_0x0001_arg, clnt);
	if (result_16 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_17 = rpc_truncate_0x0001(&rpc_truncate_0x0001_arg, clnt);
	if (result_17 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_18 = rpc_readlink_0x0001(&rpc_readlink_0x0001_arg, clnt);
	if (result_18 == (READLINK_RSP_T *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_19 = rpc_statvfs_0x0001(&rpc_statvfs_0x0001_arg, clnt);
	if (result_19 == (STATVFS_RSP_T *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_20 = rpc_setxattr_0x0001(&rpc_setxattr_0x0001_arg, clnt);
	if (result_20 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_21 = rpc_getxattr_0x0001(&rpc_getxattr_0x0001_arg, clnt);
	if (result_21 == (GETXATTR_RSP_T *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_22 = rpc_listxattr_0x0001(&rpc_listxattr_0x0001_arg, clnt);
	if (result_22 == (LISTXATTR_RSP_T *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_23 = rpc_removexattr_0x0001(&rpc_removexattr_0x0001_arg, clnt);
	if (result_23 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_24 = rpc_fallocate_0x0001(&rpc_fallocate_0x0001_arg, clnt);
	if (result_24 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	sdfs_prog_0x0001 (host);
exit (0);
}