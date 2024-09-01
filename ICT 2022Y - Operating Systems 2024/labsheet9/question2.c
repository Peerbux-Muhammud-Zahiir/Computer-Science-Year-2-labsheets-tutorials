The ls command lists the contents of a directory. To create a simplified version, we'll use the POSIX functions opendir, readdir, and closedir.

Understanding d_type Values:
DT_UNKNOWN: Type is unknown.
DT_FIFO: Named pipe (FIFO).
DT_CHR: Character device.
DT_DIR: Directory.
DT_BLK: Block device.
DT_REG: Regular file.
DT_LNK: Symbolic link.
DT_SOCK: UNIX domain socket.
DT_WHT: Whiteout (used in some filesystems).