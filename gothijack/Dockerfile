FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m gothijack
RUN chown -R root:root /home/gothijack
CMD ["/usr/sbin/xinetd","-dontfork"]
