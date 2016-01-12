// Generated by gencpp from file wheels/cmd_send_manual_instruction.msg
// DO NOT EDIT!


#ifndef WHEELS_MESSAGE_CMD_SEND_MANUAL_INSTRUCTION_H
#define WHEELS_MESSAGE_CMD_SEND_MANUAL_INSTRUCTION_H

#include <ros/service_traits.h>


#include <wheels/cmd_send_manual_instructionRequest.h>
#include <wheels/cmd_send_manual_instructionResponse.h>


namespace wheels
{

struct cmd_send_manual_instruction
{

typedef cmd_send_manual_instructionRequest Request;
typedef cmd_send_manual_instructionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct cmd_send_manual_instruction
} // namespace wheels


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::wheels::cmd_send_manual_instruction > {
  static const char* value()
  {
    return "9d8ae37d01ae5ea2ce7b0f12181b20fc";
  }

  static const char* value(const ::wheels::cmd_send_manual_instruction&) { return value(); }
};

template<>
struct DataType< ::wheels::cmd_send_manual_instruction > {
  static const char* value()
  {
    return "wheels/cmd_send_manual_instruction";
  }

  static const char* value(const ::wheels::cmd_send_manual_instruction&) { return value(); }
};


// service_traits::MD5Sum< ::wheels::cmd_send_manual_instructionRequest> should match 
// service_traits::MD5Sum< ::wheels::cmd_send_manual_instruction > 
template<>
struct MD5Sum< ::wheels::cmd_send_manual_instructionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::wheels::cmd_send_manual_instruction >::value();
  }
  static const char* value(const ::wheels::cmd_send_manual_instructionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::wheels::cmd_send_manual_instructionRequest> should match 
// service_traits::DataType< ::wheels::cmd_send_manual_instruction > 
template<>
struct DataType< ::wheels::cmd_send_manual_instructionRequest>
{
  static const char* value()
  {
    return DataType< ::wheels::cmd_send_manual_instruction >::value();
  }
  static const char* value(const ::wheels::cmd_send_manual_instructionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::wheels::cmd_send_manual_instructionResponse> should match 
// service_traits::MD5Sum< ::wheels::cmd_send_manual_instruction > 
template<>
struct MD5Sum< ::wheels::cmd_send_manual_instructionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::wheels::cmd_send_manual_instruction >::value();
  }
  static const char* value(const ::wheels::cmd_send_manual_instructionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::wheels::cmd_send_manual_instructionResponse> should match 
// service_traits::DataType< ::wheels::cmd_send_manual_instruction > 
template<>
struct DataType< ::wheels::cmd_send_manual_instructionResponse>
{
  static const char* value()
  {
    return DataType< ::wheels::cmd_send_manual_instruction >::value();
  }
  static const char* value(const ::wheels::cmd_send_manual_instructionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WHEELS_MESSAGE_CMD_SEND_MANUAL_INSTRUCTION_H
