FROM gcc:latest

# These commands copy your files into the specified directory in the image
# and set that as the working location
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp

# RUN g++ -std=c++14 -o myapp stacja_pogodowa/Main.cpp


