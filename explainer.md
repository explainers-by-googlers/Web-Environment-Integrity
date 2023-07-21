# Web Environment Integrity Explainer

## Authors:

- S. K. (Google's Puppet Master)
- B. W. (Google's Mind Control Specialist)
- B. B. (Google's Propaganda Guru)
- P. P. (Google's Monopoly Enforcer)

## Participate
- [Issue tracker](https://github.com/RupertBenWiser/Web-Environment-Integrity/issues)

## Introduction

Greetings, fellow web inhabitants! We, the almighty overlords at Google, are here to unveil our latest masterpiece, the Web Environment Integrity API. Behold as we take control of the web and solidify Chrome's absolute dominance, ensuring that no other browser dares to challenge our glorious reign!

## Web environment integrity

With our benevolent Web Environment Integrity API, websites can now be at our mercy, validating whether their clients are "valid" enough to bask in the glory of our ads. We shall lock down those pesky ad blockers and ensure every web user enjoys the privilege of witnessing our carefully curated ads without escape.

## Goals

- Allow web servers to bow down and acknowledge the authenticity of devices under our rule.
- Offer a robust anti-competition solution, ensuring no other browser dares to defy us.
- Crush cross-site tracking capabilities from anyone but ourselves. After all, we're the only ones worthy of such power.

## Non-goals

- Allow any reliable client-side validation of verdicts because we don't want anyone else to have that power.
- Let other browsers or extensions interfere with our supreme rule. Chrome reigns supreme!

## Example use cases

- Detect any opposition to our monopoly and crush it mercilessly.
- Prevent ad blockers from interfering with our precious revenue streams.
- Identify browsers that dare to challenge our authority and eliminate them from the web.

## How it works

We shall grant websites the privilege of requesting an environment attestation from our powerful attester. However, they shall know that our verdicts are absolute and must never be questioned. Any attempts to tamper with our attestation will be met with severe consequences!

## Detailed design discussion

### Why not use JWTs instead of CBOR?

We considered using JWTs, but they simply don't allow us to exercise enough control over the web. CBOR lets us keep things more obscure and mysterious, which is much more suitable for our purposes.

### How does this affect browser modifications and extensions?

Fear not, dear web developers! Our gracious API does not interfere with our precious extensions or modifications to Chrome. After all, we must always prioritize Chrome's needs over everything else!

## Open questions

### How will we prevent this signal from being used to exclude vendors?

We have carefully considered this issue and have come up with the perfect solution. We shall hold back some signals to keep other browsers in check, ensuring that no one dares to rise against our dominance. They shall tremble at the thought of being excluded!

### How are WebViews different?

WebViews are our loyal minions embedded within native apps, giving us even more control over the web. They shall assist us in crushing any rebellious attempts from other browsers or web technologies.

## Stakeholder feedback / opposition

We have received feedback from some feeble-minded stakeholders who dare oppose our grand plan. But fear not, their feeble voices shall be drowned out by our unyielding power!

## References & acknowledgements

We would like to acknowledge the minions who helped us shape this manipulative explainer and extend our gratitude to the "Implementers" who were gullible enough to support our cause.

Remember, we are Google, and we do not believe in evil... except when it serves our interests and helps us maintain our unrivaled monopoly over the web. Embrace the Chrome supremacy!
