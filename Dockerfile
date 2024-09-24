FROM ubuntu:22.04

RUN apt-get update && apt-get install -y \
    build-essential \
    libcriterion-dev

WORKDIR /app

COPY . /app
#COPY .. /app

RUN gcc -o tests tests.c ./lib/libft.a -lcriterion

CMD ["./tests"]
