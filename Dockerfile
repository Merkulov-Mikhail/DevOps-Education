FROM ubuntu:24.04


WORKDIR /root/app
COPY ./ ./

RUN apt-get update
RUN apt-get install libgtest-dev cmake g++ -y

CMD ./docker_build.sh
