FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m ret2libc
RUN chown -R root:root /home/ret2libc
CMD ["/usr/sbin/xinetd","-dontfork"]
