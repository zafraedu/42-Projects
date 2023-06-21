#!/bin/sh
# "git log" para enseñarnos el historial de commits que hayamos realizado
# "-5" nos enseña los ultimos 5 commits
# "--pretty=%H" para capturar solamente al id (hash) de nuestro commit
git log -5 --pretty=%H
