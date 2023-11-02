> ⚠️ **NOTE: This proposal is no longer pursued.**
>
> Thank you for all the constructive feedback and engagement on the topic. An Android-specific API that does not target the open web is being considered [here](https://android-developers.googleblog.com/2023/11/increasing-trust-for-embedded-media.html).

# Web Environment Integrity API

This repository details the proposal to add a new API for determining the integrity
of web environments:

```js
const attestation = await navigator.getEnvironmentIntegrity("...");
```

The [explainer](./explainer.md) goes gives a high level overview of the proposal.

The [spec](https://rupertbenwiser.github.io/Web-Environment-Integrity/) currently describes how this is being prototyped in Chromium.
