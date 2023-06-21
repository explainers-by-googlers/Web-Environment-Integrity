# Web Environment Integrity API

This repository details the proposal to add a new API for determining the integrity
of web environments:

```js
const attestation = await navigator.getEnvironmentIntegrity("...");
```

The [explainer](./explainer.md) goes gives a high level overview of the proposal.

The [spec](https://rupertbenwiser.github.io/Web-Environment-Integrity/) currently describes how this is being prototyped in Chromium.
