#include <stddef.h>
#include <stdio.h>

#include "../headers/logger.h"

static LoggingBot logger;

void logToDefault(char *logged)
{
    FILE *file = fopen(logger.fileLocation, "a");

    (void)logged;

    if (file == NULL) {
        printf("There isnt anything to write");
        return;
    }

    fclose(file);
}

void logToTimestamp(char *time, char *logged)
{
    (void)time;
    (void)logged;
}

void setDefaultFile(char *setLocation)
{
    logger.fileLocation = setLocation;
}

char *getLogFile()
{
    return logger.fileLocation;
}

void newLine()
{
}
