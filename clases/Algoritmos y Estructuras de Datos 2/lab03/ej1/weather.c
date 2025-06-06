/*
  @file weather.c
  @brief Implements weather mesuarement structure and methods
*/
#include <stdlib.h>
#include "weather.h"

Weather weather_from_file(FILE* file)//in from file
{
    Weather weather;
    fscanf(file, "%d %d %d %u %u %u", &weather._average_temp,&weather._max_temp, &weather._min_temp, &weather._pressure, &weather._moisture, &weather._rainfall);
    return weather;
}

void weather_to_file(FILE* file, Weather weather)//out to file
{
    fprintf(file, "%d %d %d %u %u %u", weather._average_temp,
            weather._max_temp, weather._min_temp, weather._pressure, weather._moisture, weather._rainfall);
}
