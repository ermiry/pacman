#ifndef _PACMAN_VECTOR_H_
#define _PACMAN_VECTOR_H_

#include "types.h"

struct v2 {
	i32 x, y;
};

typedef struct v2 v2;

inline struct v2 add (
	struct v2 a, struct v2 b
);

extern inline struct v2 sub (
	struct v2 a, struct v2 b
);

extern inline bool32 eql (
	struct v2 *a, struct v2 *b
);

extern inline struct v2 scale (
	struct v2 a, i32 amt
);

#endif