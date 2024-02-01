#ifndef __SETTYPE_H_
#define __SETTYPE_H_

struct numset{
    int *S;
};

extern struct numset setinit(int);
extern struct numset setdestroy(struct numset);
extern struct numset setrand(int);
extern struct numset setrandsize(int,int);

#endif