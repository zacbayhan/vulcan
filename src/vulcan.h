#ifndef VULCAN_H
#define VULCAN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <limits.h>
#include <pthread.h>
#include "hiredis/hiredis.h"

#define NUM_THREADS 40
#define COMMAND_LEN 10

#define STRING 1
#define LIST 2
#define SET 3
#define ZSET 4
#define PUBLISH 5

struct vulcan_params {
    int unique_id;
    long count;
    int type;
    char command[COMMAND_LEN];
} typedef vulcan_params_t;

// Prototypes

void generate_data(void *vulcan_params_pt);

void usage();


#endif /* vulcan.h */
