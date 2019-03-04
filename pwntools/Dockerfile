FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m pwntools
RUN chown -R root:root /home/pwntools
CMD ["/usr/sbin/xinetd","-dontfork"]
