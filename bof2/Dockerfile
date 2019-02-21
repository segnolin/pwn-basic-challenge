FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m bof2
RUN chown -R root:root /home/bof2
CMD ["/usr/sbin/xinetd","-dontfork"]
