docker run -it \
-v "$PWD":/usr/src/myapp -w /usr/src/myapp \
--name gcc_global \
gcc:latest