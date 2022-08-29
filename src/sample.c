#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "sample.h"

#define TRACE(fmt, ...)	printf("[%s():%d]: " fmt, __FUNCTION__, __LINE__, ## __VA_ARGS__)

static int sample_init = 0;

void init(void)
{
	TRACE("%d \n", sample_init);
	sample_init = 1;
}

void update(void)
{
	TRACE("%d -> %d\n", sample_init, sample_init + 1);
	sample_init++;
	sample_init
}
