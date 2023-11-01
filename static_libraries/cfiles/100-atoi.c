#include "main.h"

/**
 * _atoi - transforme une chaine de caractères
 * @s : chaine de car à transformer
 *
 * Description: Ascii TO Integer
 *
 * Return: conversion
 */

int _atoi(char *s)
{
	int i;
	int num;

	i = 1;
	num = 0;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * i);
}
