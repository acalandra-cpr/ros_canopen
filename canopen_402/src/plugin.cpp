#include <class_loader/class_loader.h>
#include <canopen_402/motor.h>

canopen::MotorBaseSharedPtr canopen::Motor402::Allocator::allocate(const std::string &name, canopen::ObjectStorageSharedPtr storage, const canopen::Settings &settings) {
    return make_shared<canopen::Motor402>(name, storage, settings);
}

CLASS_LOADER_REGISTER_CLASS(canopen::Motor402::Allocator, canopen::MotorBase::Allocator);
