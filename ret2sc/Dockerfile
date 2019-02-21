FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m ret2sc
RUN chown -R root:root /home/ret2sc
CMD ["/usr/sbin/xinetd","-dontfork"]
