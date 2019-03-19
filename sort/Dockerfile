FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m sort
RUN chown -R root:root /home/sort
CMD ["/usr/sbin/xinetd","-dontfork"]
