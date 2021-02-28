#include <stdlib.h>

#include "types.h"
#include "vector.h"

inline struct v2 add (
	struct v2 a, struct v2 b
) {

	a.x += b.x;
	a.y += b.y;
	return a;

}

inline struct v2 sub (
	struct v2 a, struct v2 b
) {

	a.x -= b.x;
	a.y -= b.y;
	return a;

}

inline bool32 eql (
	struct v2 *a, struct v2 *b
) {

	return a->x == b->x && a->y == b->y;

}

inline struct v2 scale (
	struct v2 a, i32 amt
) {

	a.x *= amt;
	a.y *= amt;
	return a;
	
}