/**
 * showlengths.c -- для вывода столбца длин строк текста в прямом порядке
 * следования строк
 *
 * Copyright (c) 2018, Dmitriy Kustov <kustov@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */
#include "common.h"
#include "text/text.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

static void showlengths_line(int index, char *contents, int cursor, void *data);

/**
 * Выводит столбец длин строк текста
 */
void showlengths(text txt) {
  /* Применяем функцию showlengths_line к каждой строке текста */
  process_forward(txt, showlengths_line, NULL);
}

static void showlengths_line(int index, char *contents, int cursor,
                             void *data) {
  assert(contents != NULL);

  UNUSED(index);
  UNUSED(cursor);
  UNUSED(data);

  int length = contents[strlen(contents) - 1] == '\n' ? strlen(contents) - 1
                                                      : strlen(contents);
  printf("%d\n", length);
}
