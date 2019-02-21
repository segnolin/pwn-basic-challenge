FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m bof
RUN chown -R root:root /home/bof
CMD ["/usr/sbin/xinetd","-dontfork"]
