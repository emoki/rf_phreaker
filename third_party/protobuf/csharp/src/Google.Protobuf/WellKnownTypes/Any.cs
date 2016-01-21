// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/any.proto
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Google.Protobuf.WellKnownTypes {

  /// <summary>Holder for reflection information generated from google/protobuf/any.proto</summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
  public static partial class AnyReflection {

    #region Descriptor
    /// <summary>File descriptor for google/protobuf/any.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static AnyReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Chlnb29nbGUvcHJvdG9idWYvYW55LnByb3RvEg9nb29nbGUucHJvdG9idWYi",
            "JgoDQW55EhAKCHR5cGVfdXJsGAEgASgJEg0KBXZhbHVlGAIgASgMQksKE2Nv",
            "bS5nb29nbGUucHJvdG9idWZCCEFueVByb3RvUAGgAQGiAgNHUEKqAh5Hb29n",
            "bGUuUHJvdG9idWYuV2VsbEtub3duVHlwZXNiBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedCodeInfo(null, new pbr::GeneratedCodeInfo[] {
            new pbr::GeneratedCodeInfo(typeof(global::Google.Protobuf.WellKnownTypes.Any), global::Google.Protobuf.WellKnownTypes.Any.Parser, new[]{ "TypeUrl", "Value" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  ///  `Any` contains an arbitrary serialized message along with a URL
  ///  that describes the type of the serialized message.
  ///
  ///  JSON
  ///  ====
  ///  The JSON representation of an `Any` value uses the regular
  ///  representation of the deserialized, embedded message, with an
  ///  additional field `@type` which contains the type URL. Example:
  ///
  ///      package google.profile;
  ///      message Person {
  ///        string first_name = 1;
  ///        string last_name = 2;
  ///      }
  ///
  ///      {
  ///        "@type": "type.googleapis.com/google.profile.Person",
  ///        "firstName": &lt;string>,
  ///        "lastName": &lt;string>
  ///      }
  ///
  ///  If the embedded message type is well-known and has a custom JSON
  ///  representation, that representation will be embedded adding a field
  ///  `value` which holds the custom JSON in addition to the `@type`
  ///  field. Example (for message [google.protobuf.Duration][]):
  ///
  ///      {
  ///        "@type": "type.googleapis.com/google.protobuf.Duration",
  ///        "value": "1.212s"
  ///      }
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
  public sealed partial class Any : pb::IMessage<Any> {
    private static readonly pb::MessageParser<Any> _parser = new pb::MessageParser<Any>(() => new Any());
    public static pb::MessageParser<Any> Parser { get { return _parser; } }

    public static pbr::MessageDescriptor Descriptor {
      get { return global::Google.Protobuf.WellKnownTypes.AnyReflection.Descriptor.MessageTypes[0]; }
    }

    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    public Any() {
      OnConstruction();
    }

    partial void OnConstruction();

    public Any(Any other) : this() {
      typeUrl_ = other.typeUrl_;
      value_ = other.value_;
    }

    public Any Clone() {
      return new Any(this);
    }

    /// <summary>Field number for the "type_url" field.</summary>
    public const int TypeUrlFieldNumber = 1;
    private string typeUrl_ = "";
    /// <summary>
    ///  A URL/resource name whose content describes the type of the
    ///  serialized message.
    ///
    ///  For URLs which use the schema `http`, `https`, or no schema, the
    ///  following restrictions and interpretations apply:
    ///
    ///  * If no schema is provided, `https` is assumed.
    ///  * The last segment of the URL's path must represent the fully
    ///    qualified name of the type (as in `path/google.protobuf.Duration`).
    ///  * An HTTP GET on the URL must yield a [google.protobuf.Type][]
    ///    value in binary format, or produce an error.
    ///  * Applications are allowed to cache lookup results based on the
    ///    URL, or have them precompiled into a binary to avoid any
    ///    lookup. Therefore, binary compatibility needs to be preserved
    ///    on changes to types. (Use versioned type names to manage
    ///    breaking changes.)
    ///
    ///  Schemas other than `http`, `https` (or the empty schema) might be
    ///  used with implementation specific semantics.
    /// </summary>
    public string TypeUrl {
      get { return typeUrl_; }
      set {
        typeUrl_ = pb::Preconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "value" field.</summary>
    public const int ValueFieldNumber = 2;
    private pb::ByteString value_ = pb::ByteString.Empty;
    /// <summary>
    ///  Must be valid serialized data of the above specified type.
    /// </summary>
    public pb::ByteString Value {
      get { return value_; }
      set {
        value_ = pb::Preconditions.CheckNotNull(value, "value");
      }
    }

    public override bool Equals(object other) {
      return Equals(other as Any);
    }

    public bool Equals(Any other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (TypeUrl != other.TypeUrl) return false;
      if (Value != other.Value) return false;
      return true;
    }

    public override int GetHashCode() {
      int hash = 1;
      if (TypeUrl.Length != 0) hash ^= TypeUrl.GetHashCode();
      if (Value.Length != 0) hash ^= Value.GetHashCode();
      return hash;
    }

    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    public void WriteTo(pb::CodedOutputStream output) {
      if (TypeUrl.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(TypeUrl);
      }
      if (Value.Length != 0) {
        output.WriteRawTag(18);
        output.WriteBytes(Value);
      }
    }

    public int CalculateSize() {
      int size = 0;
      if (TypeUrl.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(TypeUrl);
      }
      if (Value.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeBytesSize(Value);
      }
      return size;
    }

    public void MergeFrom(Any other) {
      if (other == null) {
        return;
      }
      if (other.TypeUrl.Length != 0) {
        TypeUrl = other.TypeUrl;
      }
      if (other.Value.Length != 0) {
        Value = other.Value;
      }
    }

    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            input.SkipLastField();
            break;
          case 10: {
            TypeUrl = input.ReadString();
            break;
          }
          case 18: {
            Value = input.ReadBytes();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
