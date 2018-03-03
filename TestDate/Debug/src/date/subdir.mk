################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/date/Date.cpp \
../src/date/DateTime.cpp \
../src/date/Time.cpp 

OBJS += \
./src/date/Date.o \
./src/date/DateTime.o \
./src/date/Time.o 

CPP_DEPS += \
./src/date/Date.d \
./src/date/DateTime.d \
./src/date/Time.d 


# Each subdirectory must supply rules for building sources it contributes
src/date/%.o: ../src/date/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


