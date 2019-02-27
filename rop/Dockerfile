FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m rop
RUN chown -R root:root /home/rop
CMD ["/usr/sbin/xinetd","-dontfork"]
