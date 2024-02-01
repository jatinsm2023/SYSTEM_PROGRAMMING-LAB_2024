#ifndef __SETTOPS_H_
#define __SETTOPS_H_

#include "settype.h"
extern void setprint(struct numset);
extern int setsize(struct numset);
extern struct numset setaddelt(struct numset, int);
extern struct numset setdelelt(struct numset, int);
extern struct numset setunion(struct numset, struct numset);
extern struct numset setintersection(struct numset, struct numset);

#endif
