// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: gerdu.proto

#include "gerdu.pb.h"
#include "gerdu.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace gerdu {

static const char* Gerdu_method_names[] = {
  "/gerdu.Gerdu/Put",
  "/gerdu.Gerdu/Get",
  "/gerdu.Gerdu/Delete",
};

std::unique_ptr< Gerdu::Stub> Gerdu::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Gerdu::Stub> stub(new Gerdu::Stub(channel));
  return stub;
}

Gerdu::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Put_(Gerdu_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Get_(Gerdu_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Delete_(Gerdu_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Gerdu::Stub::Put(::grpc::ClientContext* context, const ::gerdu::PutRequest& request, ::gerdu::PutResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Put_, context, request, response);
}

void Gerdu::Stub::experimental_async::Put(::grpc::ClientContext* context, const ::gerdu::PutRequest* request, ::gerdu::PutResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Put_, context, request, response, std::move(f));
}

void Gerdu::Stub::experimental_async::Put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gerdu::PutResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Put_, context, request, response, std::move(f));
}

void Gerdu::Stub::experimental_async::Put(::grpc::ClientContext* context, const ::gerdu::PutRequest* request, ::gerdu::PutResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Put_, context, request, response, reactor);
}

void Gerdu::Stub::experimental_async::Put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gerdu::PutResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Put_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::gerdu::PutResponse>* Gerdu::Stub::AsyncPutRaw(::grpc::ClientContext* context, const ::gerdu::PutRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::gerdu::PutResponse>::Create(channel_.get(), cq, rpcmethod_Put_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::gerdu::PutResponse>* Gerdu::Stub::PrepareAsyncPutRaw(::grpc::ClientContext* context, const ::gerdu::PutRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::gerdu::PutResponse>::Create(channel_.get(), cq, rpcmethod_Put_, context, request, false);
}

::grpc::Status Gerdu::Stub::Get(::grpc::ClientContext* context, const ::gerdu::GetRequest& request, ::gerdu::GetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Get_, context, request, response);
}

void Gerdu::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::gerdu::GetRequest* request, ::gerdu::GetResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

void Gerdu::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gerdu::GetResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

void Gerdu::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::gerdu::GetRequest* request, ::gerdu::GetResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, reactor);
}

void Gerdu::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gerdu::GetResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::gerdu::GetResponse>* Gerdu::Stub::AsyncGetRaw(::grpc::ClientContext* context, const ::gerdu::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::gerdu::GetResponse>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::gerdu::GetResponse>* Gerdu::Stub::PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::gerdu::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::gerdu::GetResponse>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, false);
}

::grpc::Status Gerdu::Stub::Delete(::grpc::ClientContext* context, const ::gerdu::DeleteRequest& request, ::gerdu::DeleteResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Delete_, context, request, response);
}

void Gerdu::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::gerdu::DeleteRequest* request, ::gerdu::DeleteResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

void Gerdu::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gerdu::DeleteResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

void Gerdu::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::gerdu::DeleteRequest* request, ::gerdu::DeleteResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, reactor);
}

void Gerdu::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gerdu::DeleteResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::gerdu::DeleteResponse>* Gerdu::Stub::AsyncDeleteRaw(::grpc::ClientContext* context, const ::gerdu::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::gerdu::DeleteResponse>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::gerdu::DeleteResponse>* Gerdu::Stub::PrepareAsyncDeleteRaw(::grpc::ClientContext* context, const ::gerdu::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::gerdu::DeleteResponse>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, false);
}

Gerdu::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Gerdu_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Gerdu::Service, ::gerdu::PutRequest, ::gerdu::PutResponse>(
          [](Gerdu::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::gerdu::PutRequest* req,
             ::gerdu::PutResponse* resp) {
               return service->Put(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Gerdu_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Gerdu::Service, ::gerdu::GetRequest, ::gerdu::GetResponse>(
          [](Gerdu::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::gerdu::GetRequest* req,
             ::gerdu::GetResponse* resp) {
               return service->Get(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Gerdu_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Gerdu::Service, ::gerdu::DeleteRequest, ::gerdu::DeleteResponse>(
          [](Gerdu::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::gerdu::DeleteRequest* req,
             ::gerdu::DeleteResponse* resp) {
               return service->Delete(ctx, req, resp);
             }, this)));
}

Gerdu::Service::~Service() {
}

::grpc::Status Gerdu::Service::Put(::grpc::ServerContext* context, const ::gerdu::PutRequest* request, ::gerdu::PutResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Gerdu::Service::Get(::grpc::ServerContext* context, const ::gerdu::GetRequest* request, ::gerdu::GetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Gerdu::Service::Delete(::grpc::ServerContext* context, const ::gerdu::DeleteRequest* request, ::gerdu::DeleteResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace gerdu

