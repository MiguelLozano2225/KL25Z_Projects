################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/LPTMR.c" \
"../Sources/NVIC.c" \
"../Sources/main.c" \
"../Sources/pin_n_clocks.c" \
"../Sources/sa_mtb.c" \

C_SRCS += \
../Sources/LPTMR.c \
../Sources/NVIC.c \
../Sources/main.c \
../Sources/pin_n_clocks.c \
../Sources/sa_mtb.c \

OBJS += \
./Sources/LPTMR.o \
./Sources/NVIC.o \
./Sources/main.o \
./Sources/pin_n_clocks.o \
./Sources/sa_mtb.o \

C_DEPS += \
./Sources/LPTMR.d \
./Sources/NVIC.d \
./Sources/main.d \
./Sources/pin_n_clocks.d \
./Sources/sa_mtb.d \

OBJS_QUOTED += \
"./Sources/LPTMR.o" \
"./Sources/NVIC.o" \
"./Sources/main.o" \
"./Sources/pin_n_clocks.o" \
"./Sources/sa_mtb.o" \

C_DEPS_QUOTED += \
"./Sources/LPTMR.d" \
"./Sources/NVIC.d" \
"./Sources/main.d" \
"./Sources/pin_n_clocks.d" \
"./Sources/sa_mtb.d" \

OBJS_OS_FORMAT += \
./Sources/LPTMR.o \
./Sources/NVIC.o \
./Sources/main.o \
./Sources/pin_n_clocks.o \
./Sources/sa_mtb.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/LPTMR.o: ../Sources/LPTMR.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/LPTMR.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/LPTMR.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/NVIC.o: ../Sources/NVIC.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/NVIC.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/NVIC.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/main.o: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/main.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/pin_n_clocks.o: ../Sources/pin_n_clocks.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/pin_n_clocks.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/pin_n_clocks.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/sa_mtb.o: ../Sources/sa_mtb.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/sa_mtb.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/sa_mtb.o"
	@echo 'Finished building: $<'
	@echo ' '


