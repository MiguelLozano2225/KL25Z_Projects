################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/main.c" \
"../Sources/nvic.c" \
"../Sources/pit.c" \

C_SRCS += \
../Sources/main.c \
../Sources/nvic.c \
../Sources/pit.c \

OBJS += \
./Sources/main.o \
./Sources/nvic.o \
./Sources/pit.o \

C_DEPS += \
./Sources/main.d \
./Sources/nvic.d \
./Sources/pit.d \

OBJS_QUOTED += \
"./Sources/main.o" \
"./Sources/nvic.o" \
"./Sources/pit.o" \

C_DEPS_QUOTED += \
"./Sources/main.d" \
"./Sources/nvic.d" \
"./Sources/pit.d" \

OBJS_OS_FORMAT += \
./Sources/main.o \
./Sources/nvic.o \
./Sources/pit.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/main.o: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/main.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/nvic.o: ../Sources/nvic.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/nvic.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/nvic.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/pit.o: ../Sources/pit.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/pit.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/pit.o"
	@echo 'Finished building: $<'
	@echo ' '


