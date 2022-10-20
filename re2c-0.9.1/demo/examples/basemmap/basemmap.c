#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <mman.h>
#include <string.h>

#ifndef	MAP_NORESERVE
#define	MAP_NORESERVE	0
#endif

volatile char ch;

main(){
    struct stat statbuf;
    char *buf;
    fstat(0, &statbuf);
    buf = mmap(NULL, statbuf.st_size, PROT_READ, MAP_SHARED|MAP_NORESERVE,
	0, 0);
    if(buf != (char*)(-1)){
		char *cur, *lim = &buf[statbuf.st_size];
	for(cur = buf; buf != lim; ++cur){
	    ch = *cur;
	}
	munmap(buf, statbuf.st_size);
    }
}
