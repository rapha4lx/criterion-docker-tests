cp ./libft.a criterion-docker-tests/lib/libft.a
cp ./libft.h criterion-docker-tests/lib/libft.h

docker build -t tests ./criterion-docker-tests/

docker run tests

docker rmi $(docker images -q) -f
