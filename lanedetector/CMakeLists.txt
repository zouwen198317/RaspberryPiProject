cmake_minimum_required (VERSION 2.6) 

PROJECT(LaneDetect)
SET(PROJECT_VERSION "0.1")

# Opencv Package
FIND_PACKAGE( OpenCV REQUIRED )
IF (${OpenCV_VERSION} VERSION_LESS 2.3.0)
	MESSAGE(FATAL_ERROR "OpenCV version is not compatible : ${OpenCV_VERSION}")
ENDIF()

SET(SRC
	myutil.cpp
	CLaneFinder.cpp
	opticalflow_ov.cpp
	clinefollowernavigatorengine.cpp
	lanedetectortest.cpp
	
)

SET(PROJECT_NAME
 lanedetectortest
)

ADD_EXECUTABLE( ${PROJECT_NAME} ${SRC} )
TARGET_LINK_LIBRARIES( ${PROJECT_NAME}  ${OpenCV_LIBS} )




