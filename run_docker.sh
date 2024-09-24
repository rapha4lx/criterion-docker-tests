docker build -t tests .
clear
docker run tests

docker rmi $(docker images -q) -f
