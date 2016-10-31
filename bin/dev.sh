fswatch -o src/*.re | xargs -n1 -I{} ./bin/build.sh
