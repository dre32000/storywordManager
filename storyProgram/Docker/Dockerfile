
# Comment:

# Download ubuntu from the docker hub
FROM ubuntu:latest

#Create a folder inside the home folder in the downloaded image.
RUN mkdir -p /home/storyProgram

#COPY the executable from this folder to the folder inside the image.
COPY . /home/storyProgram

# Run the application inside the image
CMD /home/storyProgram/storytime
