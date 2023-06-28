# Miriam
Miriam is a header-only logging library written in ANSI C (C89). It has no external dependencies and is composed of 97 lines of code. It's easily extensible and should be compatible with most toasters out there.

## Usage
1. Create miriam.cc/cpp
2. #define MIRIAM_IMPL
3. #include "miriam.h"

## Features
1. Ability to set log levels (info, warn, error, fatal)
2. Fatal == exit(1)
3. Ability to set log string (default: "[%s]: %s]")
4. Extremely easy to make sense of and extend. Don't like something? Edit miriam.h

## Interface
```c
void set_log_level(LogType logLevel);
void set_format(const char* format);
void flog_message(FILE* stream, LogType type, const char* message);
void log_info(const char* message);
void log_warning(const char* message);
void log_error(const char* message);
void log_fatal(const char* message);
```

## Why C89? It's 2013...
I find that the further back I look in time, the further I can predict the future.
