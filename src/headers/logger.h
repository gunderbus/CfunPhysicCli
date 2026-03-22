#ifndef LOGGER_H
#define LOGGER_H

/* Logger interface declarations go here. */

typedef struct Logger {
    char *fileLocation;
} LoggingBot;

void logToDefault(char *logged);
void logToTimestamp(char *time, char *logged);
void setDefaultFile(char *setLocation);
char* getLogFile();
void newLine();

#endif /* LOGGER_H */
