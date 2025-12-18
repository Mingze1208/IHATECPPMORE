#pragma once
#include "base_object.h"
#include "act_seq.h"

class RightMoveBlock : public BaseObject {
public:
    RightMoveBlock() noexcept : BaseObject() {}
    RightMoveBlock(CF_V2 pos) noexcept : BaseObject(), initial_position(pos){}
    ~RightMoveBlock() noexcept override {}

    void Start() override;
    void Update() override;
    void OnCollisionEnter(const ObjManager::ObjToken& other_token, const CF_Manifold& manifold) noexcept override;

private:
    ActSeq m_act_seq;
    CF_V2 initial_position{ 0.0f, 0.0f };
    
};