#! /bin/bash
id -Gn vkinsfat | tr -s '[:space:]' ',' | sed 's/.$//'
