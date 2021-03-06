package aiss.timestampServer;

import java.io.Serializable;

public class TimestampObject
        implements Serializable {
    private static final long serialVersionUID = -4009171162105117498L;
    public byte[] dataHash;
    public long timestamp;
    byte[] signature;

    public TimestampObject(byte[] dataHash, long timestamp) {
        super();
        this.dataHash = dataHash;
        this.timestamp = timestamp;
    }

    public TimestampObject(byte[] hash) {
        dataHash = hash;
    }

    public void setSignature(byte[] sign) {
        signature = sign;
    }

    public byte[] extractSignature() {
        byte[] sign = signature;
        signature = null;
        return sign;
    }

}
