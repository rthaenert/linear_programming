FROM ubuntu:latest

MAINTAINER rthaenert

RUN apt-get update
RUN apt-get install -y lp-solve 
# only for editing LP files within the container
RUN apt-get install -y vim 
ADD fx_arbitrage .
