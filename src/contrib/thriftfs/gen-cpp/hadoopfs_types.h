/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef hadoopfs_TYPES_H
#define hadoopfs_TYPES_H

#include <Thrift.h>
#include <reflection_limited_types.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>





class ThriftHandle {
 public:

  static const char* ascii_fingerprint; // = "2317B51D4172A111734AAB85F990F7C6";
  static const uint8_t binary_fingerprint[16]; // = {0x23,0x17,0xB5,0x1D,0x41,0x72,0xA1,0x11,0x73,0x4A,0xAB,0x85,0xF9,0x90,0xF7,0xC6};

  ThriftHandle() : id(0) {
  }

  virtual ~ThriftHandle() throw() {}

  int64_t id;

  struct __isset {
    __isset() : id(false) {}
    bool id;
  } __isset;

  bool operator == (const ThriftHandle & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    return true;
  }
  bool operator != (const ThriftHandle &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ThriftHandle & ) const;

  uint32_t read(facebook::thrift::protocol::TProtocol* iprot);
  uint32_t write(facebook::thrift::protocol::TProtocol* oprot) const;

};

class Pathname {
 public:

  static const char* ascii_fingerprint; // = "E2167DA91A8F7459A2FE1B5F56D14B5D";
  static const uint8_t binary_fingerprint[16]; // = {0xE2,0x16,0x7D,0xA9,0x1A,0x8F,0x74,0x59,0xA2,0xFE,0x1B,0x5F,0x56,0xD1,0x4B,0x5D};

  Pathname() : pathname("") {
  }

  virtual ~Pathname() throw() {}

  std::string pathname;

  struct __isset {
    __isset() : pathname(false) {}
    bool pathname;
  } __isset;

  bool operator == (const Pathname & rhs) const
  {
    if (!(pathname == rhs.pathname))
      return false;
    return true;
  }
  bool operator != (const Pathname &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Pathname & ) const;

  uint32_t read(facebook::thrift::protocol::TProtocol* iprot);
  uint32_t write(facebook::thrift::protocol::TProtocol* oprot) const;

};

class FileStatus {
 public:

  static const char* ascii_fingerprint; // = "68FE7242A6727149B291A86FB9570D2B";
  static const uint8_t binary_fingerprint[16]; // = {0x68,0xFE,0x72,0x42,0xA6,0x72,0x71,0x49,0xB2,0x91,0xA8,0x6F,0xB9,0x57,0x0D,0x2B};

  FileStatus() : path(""), length(0), isdir(0), block_replication(0), blocksize(0), modification_time(0), permission(""), owner(""), group("") {
  }

  virtual ~FileStatus() throw() {}

  std::string path;
  int64_t length;
  bool isdir;
  int16_t block_replication;
  int64_t blocksize;
  int64_t modification_time;
  std::string permission;
  std::string owner;
  std::string group;

  struct __isset {
    __isset() : path(false), length(false), isdir(false), block_replication(false), blocksize(false), modification_time(false), permission(false), owner(false), group(false) {}
    bool path;
    bool length;
    bool isdir;
    bool block_replication;
    bool blocksize;
    bool modification_time;
    bool permission;
    bool owner;
    bool group;
  } __isset;

  bool operator == (const FileStatus & rhs) const
  {
    if (!(path == rhs.path))
      return false;
    if (!(length == rhs.length))
      return false;
    if (!(isdir == rhs.isdir))
      return false;
    if (!(block_replication == rhs.block_replication))
      return false;
    if (!(blocksize == rhs.blocksize))
      return false;
    if (!(modification_time == rhs.modification_time))
      return false;
    if (!(permission == rhs.permission))
      return false;
    if (!(owner == rhs.owner))
      return false;
    if (!(group == rhs.group))
      return false;
    return true;
  }
  bool operator != (const FileStatus &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileStatus & ) const;

  uint32_t read(facebook::thrift::protocol::TProtocol* iprot);
  uint32_t write(facebook::thrift::protocol::TProtocol* oprot) const;

};

class BlockLocation {
 public:

  static const char* ascii_fingerprint; // = "8BF3B16BED96367B21783389BDF8B1C0";
  static const uint8_t binary_fingerprint[16]; // = {0x8B,0xF3,0xB1,0x6B,0xED,0x96,0x36,0x7B,0x21,0x78,0x33,0x89,0xBD,0xF8,0xB1,0xC0};

  BlockLocation() : offset(0), length(0) {
  }

  virtual ~BlockLocation() throw() {}

  std::vector<std::string>  hosts;
  std::vector<std::string>  names;
  int64_t offset;
  int64_t length;

  struct __isset {
    __isset() : hosts(false), names(false), offset(false), length(false) {}
    bool hosts;
    bool names;
    bool offset;
    bool length;
  } __isset;

  bool operator == (const BlockLocation & rhs) const
  {
    if (!(hosts == rhs.hosts))
      return false;
    if (!(names == rhs.names))
      return false;
    if (!(offset == rhs.offset))
      return false;
    if (!(length == rhs.length))
      return false;
    return true;
  }
  bool operator != (const BlockLocation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BlockLocation & ) const;

  uint32_t read(facebook::thrift::protocol::TProtocol* iprot);
  uint32_t write(facebook::thrift::protocol::TProtocol* oprot) const;

};

class MalformedInputException : public facebook::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "E2167DA91A8F7459A2FE1B5F56D14B5D";
  static const uint8_t binary_fingerprint[16]; // = {0xE2,0x16,0x7D,0xA9,0x1A,0x8F,0x74,0x59,0xA2,0xFE,0x1B,0x5F,0x56,0xD1,0x4B,0x5D};

  MalformedInputException() : message("") {
  }

  virtual ~MalformedInputException() throw() {}

  std::string message;

  struct __isset {
    __isset() : message(false) {}
    bool message;
  } __isset;

  bool operator == (const MalformedInputException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const MalformedInputException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MalformedInputException & ) const;

  uint32_t read(facebook::thrift::protocol::TProtocol* iprot);
  uint32_t write(facebook::thrift::protocol::TProtocol* oprot) const;

};

class ThriftIOException : public facebook::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "E2167DA91A8F7459A2FE1B5F56D14B5D";
  static const uint8_t binary_fingerprint[16]; // = {0xE2,0x16,0x7D,0xA9,0x1A,0x8F,0x74,0x59,0xA2,0xFE,0x1B,0x5F,0x56,0xD1,0x4B,0x5D};

  ThriftIOException() : message("") {
  }

  virtual ~ThriftIOException() throw() {}

  std::string message;

  struct __isset {
    __isset() : message(false) {}
    bool message;
  } __isset;

  bool operator == (const ThriftIOException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ThriftIOException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ThriftIOException & ) const;

  uint32_t read(facebook::thrift::protocol::TProtocol* iprot);
  uint32_t write(facebook::thrift::protocol::TProtocol* oprot) const;

};



#endif
