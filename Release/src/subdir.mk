################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Engine.cpp \
../src/SdlError.cpp \
../src/Window.cpp 

OBJS += \
./src/Engine.o \
./src/SdlError.o \
./src/Window.o 

CPP_DEPS += \
./src/Engine.d \
./src/SdlError.d \
./src/Window.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/max/dev/eclipseWorkspaceCpp/slidePuzzle/include" -O3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


