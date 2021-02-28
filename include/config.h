#ifndef _PACMAN_CONFIG_H_
#define _PACMAN_CONFIG_H_

#define internal static
#define global_variable static
#define local_persist static
#define UNUSED(x) (void)(x);
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) < (y) ? (y) : (x))

#define ARRAY_LENGTH(arr) (sizeof (arr) / sizeof (arr[0]))

#define for_array(index, arr)						\
	for (index = 0; index < ARRAY_LENGTH (arr); index++)

#define MS(x) (1000*(x))
#define SECONDS(x) (MS(1000*(x)))

#endif